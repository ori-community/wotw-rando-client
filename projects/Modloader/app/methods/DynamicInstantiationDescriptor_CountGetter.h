#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::DynamicInstantiationDescriptor_CountGetter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::MonoBehaviour* component, int32_t array_index, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x030E0580, app::IAsyncResult*, BeginInvoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::MonoBehaviour* component, int32_t array_index, app::GameObject* go, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::DynamicInstantiationDescriptor_CountGetter
