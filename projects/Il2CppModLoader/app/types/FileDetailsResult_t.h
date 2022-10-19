#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileDetailsResult_t {
        namespace {
            inline app::FileDetailsResult_t__Class* type_info_ref = nullptr;
        }
        inline app::FileDetailsResult_t__Class** type_info = &type_info_ref;
        inline app::FileDetailsResult_t__Class* get_class() {
            return il2cpp::get_class<app::FileDetailsResult_t__Class>(type_info, "Steamworks", "FileDetailsResult_t");
        }
        inline app::FileDetailsResult_t* create() {
            return il2cpp::create_object<app::FileDetailsResult_t>(get_class());
        }
        inline app::FileDetailsResult_t__Boxed* box(app::FileDetailsResult_t value) {
            return il2cpp::box_value<app::FileDetailsResult_t__Boxed>(get_class(), value);
        }
    } // namespace FileDetailsResult_t
} // namespace app::classes::types
