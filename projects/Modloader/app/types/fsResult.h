#pragma once
#include <Modloader/app/structs/fsResult.h>
#include <Modloader/app/structs/fsResult__Boxed.h>
#include <Modloader/app/structs/fsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsResult {
        inline app::fsResult__Class** type_info() {
            static app::fsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsResult__Class**)(modloader::win::memory::resolve_rva(0x047896C0));
            }
            return cache;
        }
        inline app::fsResult__Class* get_class() {
            return il2cpp::get_class<app::fsResult__Class>(type_info(), "FullSerializer", "fsResult");
        }
        inline app::fsResult* create() {
            return il2cpp::create_object<app::fsResult>(get_class());
        }
        inline app::fsResult__Boxed* box(app::fsResult value) {
            return il2cpp::box_value<app::fsResult__Boxed>(get_class(), value);
        }
    } // namespace fsResult
} // namespace app::classes::types
