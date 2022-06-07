#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, ctor, (app::TypeDescriptor_ComNativeDescriptionProvider * this_ptr, app::IComNativeDescriptorHandler * handler))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IComNativeDescriptorHandler *, get_Handler, (app::TypeDescriptor_ComNativeDescriptionProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Handler, (app::TypeDescriptor_ComNativeDescriptionProvider * this_ptr, app::IComNativeDescriptorHandler * value))
    IL2CPP_REGISTER_METHOD(0x02956670, app::ICustomTypeDescriptor *, GetTypeDescriptor, (app::TypeDescriptor_ComNativeDescriptionProvider * this_ptr, app::Type * object_type, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x04721DF0, TypeDescriptor_ComNativeDescriptionProvider_GetTypeDescriptor__MethodInfo)
}
