#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Object {
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals_1, (app::Object * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0227B430, bool, Equals_2, (app::Object * obj_a, app::Object* obj_b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Finalize, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1C4F0, app::Type*, GetType, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, MemberwiseClone, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E16610, app::String*, ToString, (app::Object * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, ReferenceEquals, (app::Object * obj_a, app::Object* obj_b))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, InternalGetHashCode, (app::Object * o))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FieldGetter, (app::Object * this_ptr, app::String* type_name, app::String* field_name, app::Object** val))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FieldSetter, (app::Object * this_ptr, app::String* type_name, app::String* field_name, app::Object* val))
} // namespace app::classes::System::Object
