#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonSerializerInternalBase_ReferenceEqualsEqualityComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer {
    IL2CPP_REGISTER_METHOD(
        0x01652210,
        bool,
        IEqualityComparer_object__Equals,
        app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(
        0x01652220,
        int32_t,
        IEqualityComparer_object__GetHashCode,
        app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer
