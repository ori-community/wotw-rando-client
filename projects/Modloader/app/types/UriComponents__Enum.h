#pragma once
#include <Modloader/app/structs/UriComponents__Enum.h>
#include <Modloader/app/structs/UriComponents__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriComponents__Enum {
        inline app::UriComponents__Enum__Class** type_info() {
            static app::UriComponents__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UriComponents__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775410));
            }
            return cache;
        }
        inline app::UriComponents__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriComponents__Enum__Class>(type_info(), "System", "UriComponents");
        }
        inline app::UriComponents__Enum* create() {
            return il2cpp::create_object<app::UriComponents__Enum>(get_class());
        }
    } // namespace UriComponents__Enum
} // namespace app::classes::types
