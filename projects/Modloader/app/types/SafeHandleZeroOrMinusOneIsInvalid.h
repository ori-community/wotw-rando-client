#pragma once
#include <Modloader/app/structs/SafeHandleZeroOrMinusOneIsInvalid.h>
#include <Modloader/app/structs/SafeHandleZeroOrMinusOneIsInvalid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeHandleZeroOrMinusOneIsInvalid {
        inline app::SafeHandleZeroOrMinusOneIsInvalid__Class** type_info() {
            static app::SafeHandleZeroOrMinusOneIsInvalid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafeHandleZeroOrMinusOneIsInvalid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafeHandleZeroOrMinusOneIsInvalid__Class* get_class() {
            return il2cpp::get_class<app::SafeHandleZeroOrMinusOneIsInvalid__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
        }
        inline app::SafeHandleZeroOrMinusOneIsInvalid* create() {
            return il2cpp::create_object<app::SafeHandleZeroOrMinusOneIsInvalid>(get_class());
        }
    } // namespace SafeHandleZeroOrMinusOneIsInvalid
} // namespace app::classes::types
