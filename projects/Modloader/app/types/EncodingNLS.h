#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncodingNLS__Class.h>
#include <Modloader/app/structs/EncodingNLS.h>

namespace app::classes::types {
    namespace EncodingNLS {
        namespace {
            inline app::EncodingNLS__Class* type_info_ref = nullptr;
        }
        inline app::EncodingNLS__Class** type_info = &type_info_ref;
        inline app::EncodingNLS__Class* get_class() {
            return il2cpp::get_class<app::EncodingNLS__Class>(type_info, "System.Text", "EncodingNLS");
        }
        inline app::EncodingNLS* create() {
            return il2cpp::create_object<app::EncodingNLS>(get_class());
        }
    } // namespace EncodingNLS
} // namespace app::classes::types
