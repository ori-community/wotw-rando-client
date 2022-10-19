#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpProcessingResult__Enum {
        namespace {
            inline app::HttpProcessingResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpProcessingResult__Enum__Class** type_info = &type_info_ref;
        inline app::HttpProcessingResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpProcessingResult__Enum__Class>(type_info, "System.Net", "HttpProcessingResult");
        }
        inline app::HttpProcessingResult__Enum* create() {
            return il2cpp::create_object<app::HttpProcessingResult__Enum>(get_class());
        }
    } // namespace HttpProcessingResult__Enum
} // namespace app::classes::types
