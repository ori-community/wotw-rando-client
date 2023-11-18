#pragma once
#include <Modloader/app/structs/fsGuidConverter.h>
#include <Modloader/app/structs/fsGuidConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsGuidConverter {
        inline app::fsGuidConverter__Class** type_info() {
            static app::fsGuidConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsGuidConverter__Class**)(modloader::win::memory::resolve_rva(0x047161A8));
            }
            return cache;
        }
        inline app::fsGuidConverter__Class* get_class() {
            return il2cpp::get_class<app::fsGuidConverter__Class>(type_info(), "FullSerializer.Internal", "fsGuidConverter");
        }
        inline app::fsGuidConverter* create() {
            return il2cpp::create_object<app::fsGuidConverter>(get_class());
        }
    } // namespace fsGuidConverter
} // namespace app::classes::types
