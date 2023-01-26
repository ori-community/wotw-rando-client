#pragma once
#include <Modloader/app/structs/PromiseState__Enum.h>
#include <Modloader/app/structs/PromiseState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PromiseState__Enum {
        inline app::PromiseState__Enum__Class** type_info() {
            static app::PromiseState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PromiseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790980));
            }
            return cache;
        }
        inline app::PromiseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PromiseState__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PromiseState");
        }
        inline app::PromiseState__Enum* create() {
            return il2cpp::create_object<app::PromiseState__Enum>(get_class());
        }
    } // namespace PromiseState__Enum
} // namespace app::classes::types
