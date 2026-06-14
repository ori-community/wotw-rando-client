#pragma once
#include <Modloader/app/structs/HttpProcessingResult__Enum.h>
#include <Modloader/app/structs/HttpProcessingResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpProcessingResult__Enum {
        inline app::HttpProcessingResult__Enum__Class** type_info() {
            static app::HttpProcessingResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpProcessingResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpProcessingResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpProcessingResult__Enum__Class>(type_info(), "System.Net", "HttpProcessingResult");
        }
        inline app::HttpProcessingResult__Enum* create() {
            return il2cpp::create_object<app::HttpProcessingResult__Enum>(get_class());
        }
    } // namespace HttpProcessingResult__Enum
} // namespace app::classes::types
