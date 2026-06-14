#pragma once
#include <Modloader/app/structs/Match_1.h>
#include <Modloader/app/structs/Match_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Match_1 {
        inline app::Match_1__Class** type_info() {
            static app::Match_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Match_1__Class**)(modloader::win::memory::resolve_rva(0x047779A8));
            }
            return cache;
        }
        inline app::Match_1__Class* get_class() {
            return il2cpp::get_class<app::Match_1__Class>(type_info(), "Unity.IO.Compression", "Match");
        }
        inline app::Match_1* create() {
            return il2cpp::create_object<app::Match_1>(get_class());
        }
    } // namespace Match_1
} // namespace app::classes::types
