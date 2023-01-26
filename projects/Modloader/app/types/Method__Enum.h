#pragma once
#include <Modloader/app/structs/Method__Enum.h>
#include <Modloader/app/structs/Method__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Method__Enum {
        inline app::Method__Enum__Class** type_info() {
            static app::Method__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Method__Enum__Class**)(modloader::win::memory::resolve_rva(0x04722BE0));
            }
            return cache;
        }
        inline app::Method__Enum__Class* get_class() {
            return il2cpp::get_class<app::Method__Enum__Class>(type_info(), "Moon.Network.Web", "Method");
        }
        inline app::Method__Enum* create() {
            return il2cpp::create_object<app::Method__Enum>(get_class());
        }
    } // namespace Method__Enum
} // namespace app::classes::types
