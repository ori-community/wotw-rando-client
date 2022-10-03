#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Specialized::CaseSensitiveStringDictionary {
    IL2CPP_REGISTER_METHOD(0x024928E0, void, ctor, (app::CaseSensitiveStringDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024928F0, app::String*, get_Item, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0473ACF8, CaseSensitiveStringDictionary_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024929F0, void, set_Item, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0478F6E0, CaseSensitiveStringDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02492AE0, void, Add, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04784D68, CaseSensitiveStringDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02492BD0, void, Remove, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0476A278, CaseSensitiveStringDictionary_Remove__MethodInfo)
} // namespace app::classes::System::Collections::Specialized::CaseSensitiveStringDictionary
