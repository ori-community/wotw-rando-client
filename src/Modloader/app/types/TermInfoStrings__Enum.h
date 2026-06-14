#pragma once
#include <Modloader/app/structs/TermInfoStrings__Enum.h>
#include <Modloader/app/structs/TermInfoStrings__Enum__Array.h>
#include <Modloader/app/structs/TermInfoStrings__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TermInfoStrings__Enum {
        inline app::TermInfoStrings__Enum__Class** type_info() {
            static app::TermInfoStrings__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TermInfoStrings__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787780));
            }
            return cache;
        }
        inline app::TermInfoStrings__Enum__Class* get_class() {
            return il2cpp::get_class<app::TermInfoStrings__Enum__Class>(type_info(), "System", "TermInfoStrings");
        }
        inline app::TermInfoStrings__Enum* create() {
            return il2cpp::create_object<app::TermInfoStrings__Enum>(get_class());
        }
        inline app::TermInfoStrings__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TermInfoStrings__Enum__Array>(get_class(), size);
        }
        inline app::TermInfoStrings__Enum__Array* create_array(const std::vector<app::TermInfoStrings__Enum*>& items) {
            return il2cpp::array_new<app::TermInfoStrings__Enum__Array>(get_class(), items);
        }
    } // namespace TermInfoStrings__Enum
} // namespace app::classes::types
