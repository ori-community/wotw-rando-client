#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeHandleZeroOrMinusOneIsInvalid {
        namespace {
            app::SafeHandleZeroOrMinusOneIsInvalid__Class* type_info_ref = nullptr;
        }
        app::SafeHandleZeroOrMinusOneIsInvalid__Class** type_info = &type_info_ref;
        inline app::SafeHandleZeroOrMinusOneIsInvalid__Class* get_class() {
            return il2cpp::get_class<app::SafeHandleZeroOrMinusOneIsInvalid__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
        }
        inline app::SafeHandleZeroOrMinusOneIsInvalid* create() {
            return il2cpp::create_object<app::SafeHandleZeroOrMinusOneIsInvalid>(get_class());
        }
    } // namespace SafeHandleZeroOrMinusOneIsInvalid
} // namespace app::classes::types
