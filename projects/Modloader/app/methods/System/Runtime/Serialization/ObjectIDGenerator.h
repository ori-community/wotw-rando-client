#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::ObjectIDGenerator {
    IL2CPP_REGISTER_METHOD(0x01ED7280, void, ctor, (app::ObjectIDGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED7390, int32_t, FindElement, (app::ObjectIDGenerator * this_ptr, app::Object* obj, bool* found))
    IL2CPP_REGISTER_METHOD(0x01ED7460, int64_t, GetId, (app::ObjectIDGenerator * this_ptr, app::Object* obj, bool* first_time))
    IL2CPP_REGISTER_METHODINFO(0x04742148, ObjectIDGenerator_GetId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01ED7690, int64_t, HasId, (app::ObjectIDGenerator * this_ptr, app::Object* obj, bool* first_time))
    IL2CPP_REGISTER_METHODINFO(0x047951F0, ObjectIDGenerator_HasId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01ED77D0, void, Rehash, (app::ObjectIDGenerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787908, ObjectIDGenerator_Rehash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01ED7B60, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::ObjectIDGenerator
