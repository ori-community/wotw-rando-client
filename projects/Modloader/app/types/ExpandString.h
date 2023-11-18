#pragma once
#include <Modloader/app/structs/ExpandString.h>
#include <Modloader/app/structs/ExpandString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandString {
        inline app::ExpandString__Class** type_info() {
            static app::ExpandString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandString__Class**)(modloader::win::memory::resolve_rva(0x04769CB8));
            }
            return cache;
        }
        inline app::ExpandString__Class* get_class() {
            return il2cpp::get_class<app::ExpandString__Class>(type_info(), "Microsoft.Win32", "ExpandString");
        }
        inline app::ExpandString* create() {
            return il2cpp::create_object<app::ExpandString>(get_class());
        }
    } // namespace ExpandString
} // namespace app::classes::types
