#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeInputEventBufferPtr {
        namespace {
            inline app::NativeInputEventBufferPtr__Class* type_info_ref = nullptr;
        }
        inline app::NativeInputEventBufferPtr__Class** type_info = &type_info_ref;
        inline app::NativeInputEventBufferPtr__Class* get_class() {
            return il2cpp::get_class<app::NativeInputEventBufferPtr__Class>(type_info, "UnityEngineInternal.Input", "NativeInputEventBuffer*");
        }
        inline app::NativeInputEventBufferPtr* create() {
            return il2cpp::create_object<app::NativeInputEventBufferPtr>(get_class());
        }
    } // namespace NativeInputEventBufferPtr
} // namespace app::classes::types
