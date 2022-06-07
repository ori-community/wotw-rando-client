#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::DynamicInstantiationDescriptor_ReflectionInfo obj))
    IL2CPP_REGISTER_METHOD(0x029FD640, app::IAsyncResult *, BeginInvoke, (app::Action_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::DynamicInstantiationDescriptor_ReflectionInfo obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_DynamicInstantiationDescriptor_ReflectionInfo_ * this_ptr, app::IAsyncResult * result))
}
