#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/List_1_FullSerializer_Internal_fsMetaProperty_.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsConfig.h>
#include <Modloader/app/structs/fsMetaProperty__Array.h>
#include <Modloader/app/structs/fsMetaType.h>

namespace app::classes::FullSerializer::fsMetaType {
    IL2CPP_REGISTER_METHOD(0x015113F0, app::fsMetaType*, Get, app::fsConfig* config, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01511900, void, ClearCache, )
    IL2CPP_REGISTER_METHOD(0x01511B80, void, ctor, app::fsMetaType* this_ptr, app::fsConfig* config, app::Type* reflected_type)
    IL2CPP_REGISTER_METHOD(
        0x01511D30,
        void,
        CollectProperties,
        app::fsConfig* config,
        app::List_1_FullSerializer_Internal_fsMetaProperty_* properties,
        app::Type* reflected_type
    )
    IL2CPP_REGISTER_METHOD(0x01512620, bool, IsAutoProperty, app::PropertyInfo_1* property, app::MemberInfo_1__Array* members)
    IL2CPP_REGISTER_METHOD(
        0x01512780,
        bool,
        CanSerializeProperty,
        app::fsConfig* config,
        app::PropertyInfo_1* property,
        app::MemberInfo_1__Array* members,
        bool annotation_free_value
    )
    IL2CPP_REGISTER_METHOD(0x01512E50, bool, CanSerializeField, app::fsConfig* config, app::FieldInfo_1* field, bool annotation_free_value)
    IL2CPP_REGISTER_METHOD(0x015132F0, void, EmitAotData, app::fsMetaType* this_ptr, bool throw_exception)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::fsMetaProperty__Array*, get_Properties, app::fsMetaType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Properties, app::fsMetaType* this_ptr, app::fsMetaProperty__Array* value)
    IL2CPP_REGISTER_METHOD(0x01513600, bool, get_HasDefaultConstructor, app::fsMetaType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01513880, bool, get_IsDefaultConstructorPublic, app::fsMetaType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015139A0, app::Object*, CreateInstance, app::fsMetaType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01513DC0, void, cctor, )
} // namespace app::classes::FullSerializer::fsMetaType
