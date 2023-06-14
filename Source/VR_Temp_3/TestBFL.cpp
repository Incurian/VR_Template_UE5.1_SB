#include "TestBFL.h"
#include <Runtime/Core/Public/Misc/OutputDeviceNull.h>
bool UTestBFL::DoCallFunctionByName(FString Target, FString Command, FString Arguments)
{
	FString Comb;
	Comb += Target;
	Comb += " ";
	Comb += Command;
	Comb += " ";
	Comb += Arguments;
	const TCHAR* Cmd = *Comb;
	FString const ObjectName = FParse::Token(Cmd, 0);
	FOutputDeviceNull* Stupid = nullptr;
	UObject* ObjectToMatch = FindObject<UObject>(ANY_PACKAGE, *ObjectName);
	return(ObjectToMatch->CallFunctionByNameWithArguments(Cmd, *Stupid, nullptr, true));
}
