#pragma once
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/StackCrawlMark__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackCrawlMark__Enum {
        inline app::StackCrawlMark__Enum__Class** type_info() {
            static app::StackCrawlMark__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StackCrawlMark__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StackCrawlMark__Enum__Class* get_class() {
            return il2cpp::get_class<app::StackCrawlMark__Enum__Class>(type_info(), "System.Threading", "StackCrawlMark");
        }
        inline app::StackCrawlMark__Enum* create() {
            return il2cpp::create_object<app::StackCrawlMark__Enum>(get_class());
        }
    } // namespace StackCrawlMark__Enum
} // namespace app::classes::types
