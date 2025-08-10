#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FixupHolder.h>
#include <Modloader/app/structs/ISerializationSurrogate.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LongList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectHolder.h>
#include <Modloader/app/structs/ObjectManager.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#include <Modloader/app/structs/ValueTypeFixupInfo.h>

namespace app::classes::System::Runtime::Serialization::ObjectHolder {
    IL2CPP_REGISTER_METHOD(0x01ED59B0, void, ctor_1, app::ObjectHolder* this_ptr, int64_t obj_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01ED5A70,
        void,
        ctor_2,
        app::ObjectHolder* this_ptr,
        app::Object* obj,
        int64_t obj_i_d,
        app::SerializationInfo* info,
        app::ISerializationSurrogate* surrogate,
        int64_t id_of_containing_obj,
        app::FieldInfo_1* field,
        app::Int32__Array* array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x01ED5D60,
        void,
        ctor_3,
        app::ObjectHolder* this_ptr,
        app::String* obj,
        int64_t obj_i_d,
        app::SerializationInfo* info,
        app::ISerializationSurrogate* surrogate,
        int64_t id_of_containing_obj,
        app::FieldInfo_1* field,
        app::Int32__Array* array_index
    )
    IL2CPP_REGISTER_METHOD(0x01ED5F30, void, IncrementDescendentFixups, app::ObjectHolder* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x01ED5F40, void, DecrementFixupsRemaining, app::ObjectHolder* this_ptr, app::ObjectManager* manager)
    IL2CPP_REGISTER_METHOD(0x01ED5FB0, void, RemoveDependency, app::ObjectHolder* this_ptr, int64_t id)
    IL2CPP_REGISTER_METHOD(0x01ED6050, void, AddFixup, app::ObjectHolder* this_ptr, app::FixupHolder* fixup, app::ObjectManager* manager)
    IL2CPP_REGISTER_METHOD(0x01ED62A0, void, UpdateDescendentDependencyChain, app::ObjectHolder* this_ptr, int32_t amount, app::ObjectManager* manager)
    IL2CPP_REGISTER_METHOD(0x01ED6310, void, AddDependency, app::ObjectHolder* this_ptr, int64_t dependent_object)
    IL2CPP_REGISTER_METHOD(
        0x01ED65E0,
        void,
        UpdateData,
        app::ObjectHolder* this_ptr,
        app::Object* obj,
        app::SerializationInfo* info,
        app::ISerializationSurrogate* surrogate,
        int64_t id_of_container,
        app::FieldInfo_1* field,
        app::Int32__Array* array_index,
        app::ObjectManager* manager
    )
    IL2CPP_REGISTER_METHOD(0x005100F0, void, MarkForCompletionWhenAvailable, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6850, void, SetFlags, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01760C10, bool, get_IsIncompleteObjectReference, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6920, void, set_IsIncompleteObjectReference, app::ObjectHolder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01ED6940, bool, get_RequiresDelayedFixup, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01760C20, bool, get_RequiresValueTypeFixup, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6950, bool, get_ValueTypeFixupPerformed, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6980, void, set_ValueTypeFixupPerformed, app::ObjectHolder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0194E610, bool, get_HasISerializable, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6990, bool, get_HasSurrogate, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED69A0, bool, get_CanSurrogatedObjectValueChange, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6A80, bool, get_CanObjectValueChange, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_DirectlyDependentObjects, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6AA0, int32_t, get_TotalDependentObjects, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_Reachable, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_Reachable, app::ObjectHolder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01D60C50, bool, get_TypeLoadExceptionReachable, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::TypeLoadExceptionHolder*, get_TypeLoadException, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_TypeLoadException, app::ObjectHolder* this_ptr, app::TypeLoadExceptionHolder* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_ObjectValue, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6AB0, void, SetObjectValue, app::ObjectHolder* this_ptr, app::Object* obj, app::ObjectManager* manager)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::SerializationInfo*, get_SerializationInfo, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_SerializationInfo, app::ObjectHolder* this_ptr, app::SerializationInfo* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ISerializationSurrogate*, get_Surrogate, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::LongList*, get_DependentObjects, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DependentObjects, app::ObjectHolder* this_ptr, app::LongList* value)
    IL2CPP_REGISTER_METHOD(0x01ED6C00, bool, get_RequiresSerInfoFixup, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6C20, void, set_RequiresSerInfoFixup, app::ObjectHolder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ValueTypeFixupInfo*, get_ValueFixup, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6C40, bool, get_CompletelyFixed, app::ObjectHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6C60, int64_t, get_ContainerID, app::ObjectHolder* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::ObjectHolder
