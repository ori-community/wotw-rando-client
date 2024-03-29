#pragma once
#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AKRESULT__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AKRESULT__Enum {
        inline app::AKRESULT__Enum__Class** type_info() {
            static app::AKRESULT__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AKRESULT__Enum__Class**)(modloader::win::memory::resolve_rva(0x047037E0));
            }
            return cache;
        }
        inline app::AKRESULT__Enum__Class* get_class() {
            return il2cpp::get_class<app::AKRESULT__Enum__Class>(type_info(), "", "AKRESULT");
        }
        inline app::AKRESULT__Enum* create() {
            return il2cpp::create_object<app::AKRESULT__Enum>(get_class());
        }
    } // namespace AKRESULT__Enum
} // namespace app::classes::types
