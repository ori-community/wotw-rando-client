#include "pch.h"
#include "../../interceptionMacros.h"
#include "../../dllMain.h"


BINDING(29815824, __int64, String_GetCharArray, (__int64))//System.String$$ToCharArray
BINDING(34196736, int, Array_get_Count, (__int64)) //System.Array$$get_Length
BINDING(34186208, __int64, Array_GetValue, (__int64, int index)) //System.Array$$GetValue
void printCSString(__int64 str){
	if(str)
	{

		__int64 chars = String_GetCharArray(str);
		if(chars)
		{
			auto size = Array_get_Count(chars);
			auto str = new char[size];
			for(int i = 0; i < size; i++)
			{
				auto charStructPointer = Array_GetValue(chars, i);
				str[i] = *(char*) (charStructPointer + 0x10);
			}
			log(str);

		}
	}
}

INTERCEPT(20853008, __int64, showAbilityMessage, (__int64 a, __int64 b, __int64 c), {
	//MessageControllerB$$ShowAbilityMessage
	return 0;
		  });

INTERCEPT(20854368, __int64, showShardMessage, (__int64 a, __int64 b, char c), {
	//MessageControllerB$$ShowShardMessage
	return 0;
		  });
INTERCEPT(20869824, __int64, showSpiritTreeTextMessage, (__int64 a, __int64 b), {
	//MessageControllerB$$ShowSpiritTreeTextMessage
	return 0;
		  });

INTERCEPT(6203856, void, performPickupSequence, (__int64 thisPtr, __int64 info), {
	//SeinPickupProcessor$$PerformPickupSequence
	//noping this removes all pickup animations
		  });

INTERCEPT(20846752, bool, anyAbilityPickupStoryMessagesVisible, (__int64 thisPtr), {
	//MessageControllerB$$get_AnyAbilityPickupStoryMessagesVisible
	return 0;
		  });

INTERCEPT(17084160, __int64, TranslatedMessageProvider_MessageItem_Message, (__int64 pThis1, __int64 pThis2, char language), {
	//TranslatedMessageProvider.MessageItem$$GetDescriptor
		auto result = TranslatedMessageProvider_MessageItem_Message(pThis1, pThis2, language);
		if(result && isInShopScreen())
			{
			__int64 newString = CSharpLib->call<__int64>("ShopStringRepl", *(__int64*) result);
			if(newString)
			{
				*(__int64*) result = newString;
			}
		}
		return (__int64) result;
					});