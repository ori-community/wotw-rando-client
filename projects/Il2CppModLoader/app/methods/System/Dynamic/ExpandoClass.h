#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Dynamic::ExpandoClass {
    IL2CPP_REGISTER_METHOD(0x01F8BAC0, void, ctor_1, (app::ExpandoClass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8BB50, void, ctor_2, (app::ExpandoClass * this_ptr, app::String__Array* keys, int32_t hash_code))
    IL2CPP_REGISTER_METHOD(0x01F8BB60, app::ExpandoClass*, FindNewClass, (app::ExpandoClass * this_ptr, app::String* new_key))
    IL2CPP_REGISTER_METHOD(0x01F8C110, app::List_1_System_WeakReference_*, GetTransitionList, (app::ExpandoClass * this_ptr, int32_t hash_code))
    IL2CPP_REGISTER_METHOD(0x01F8C420, int32_t, GetValueIndex, (app::ExpandoClass * this_ptr, app::String* name, bool case_insensitive, app::ExpandoObject* obj))
    IL2CPP_REGISTER_METHOD(0x01F8C440, int32_t, GetValueIndexCaseSensitive, (app::ExpandoClass * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01F8C580, int32_t, GetValueIndexCaseInsensitive, (app::ExpandoClass * this_ptr, app::String* name, app::ExpandoObject* obj))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String__Array*, get_Keys, (app::ExpandoClass * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8C860, void, cctor, ())
} // namespace app::classes::System::Dynamic::ExpandoClass
