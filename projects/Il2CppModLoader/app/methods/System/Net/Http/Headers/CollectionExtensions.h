#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::CollectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_1, (app::List_1_System_Object_ * first, app::List_1_System_Object_ * second))
    IL2CPP_REGISTER_METHOD(0x01541BA0, app::String *, ToString_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_1, (app::List_1_System_Object_ * list, app::StringBuilder * sb))
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_2, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * first, app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * second))
    IL2CPP_REGISTER_METHODINFO(0x0476A688, CollectionExtensions_2_SequenceEqual_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_3, (app::List_1_System_String_ * first, app::List_1_System_String_ * second))
    IL2CPP_REGISTER_METHODINFO(0x04728E78, CollectionExtensions_2_SequenceEqual_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_2, (app::List_1_System_String_ * list, app::StringBuilder * sb))
    IL2CPP_REGISTER_METHODINFO(0x0472D9A8, CollectionExtensions_2_ToStringBuilder_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_3, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * list, app::StringBuilder * sb))
    IL2CPP_REGISTER_METHODINFO(0x04780B08, CollectionExtensions_2_ToStringBuilder_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541BA0, app::String *, ToString_2, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0474BEC0, CollectionExtensions_2_ToString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_4, (app::List_1_System_Net_Http_Headers_RangeItemHeaderValue_ * first, app::List_1_System_Net_Http_Headers_RangeItemHeaderValue_ * second))
    IL2CPP_REGISTER_METHODINFO(0x0476DC00, CollectionExtensions_2_SequenceEqual_3__MethodInfo)
}
