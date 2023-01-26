#pragma once
#include <Modloader/app/structs/UriKind__Enum.h>
#include <Modloader/app/structs/UriKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriKind__Enum {
        inline app::UriKind__Enum__Class** type_info() {
            static app::UriKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UriKind__Enum__Class**)(modloader::win::memory::resolve_rva(0x04712008));
            }
            return cache;
        }
        inline app::UriKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriKind__Enum__Class>(type_info(), "System", "UriKind");
        }
        inline app::UriKind__Enum* create() {
            return il2cpp::create_object<app::UriKind__Enum>(get_class());
        }
    } // namespace UriKind__Enum
} // namespace app::classes::types
