#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Bindings::NativeTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x004C4CE0, void, ctor_1, (app::NativeTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, ctor_2, (app::NativeTypeAttribute * this_ptr, app::CodegenOptions__Enum codegen_options))
    IL2CPP_REGISTER_METHOD(0x031BB650, void, ctor_3, (app::NativeTypeAttribute * this_ptr, app::String* header))
    IL2CPP_REGISTER_METHODINFO(0x04773188, NativeTypeAttribute__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB780, void, ctor_4, (app::NativeTypeAttribute * this_ptr, app::CodegenOptions__Enum codegen_options, app::String* intermediate_struct_name))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Header, (app::NativeTypeAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_IntermediateScriptingStructName, (app::NativeTypeAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_CodegenOptions, (app::NativeTypeAttribute * this_ptr, app::CodegenOptions__Enum value))
} // namespace app::classes::UnityEngine::Bindings::NativeTypeAttribute
