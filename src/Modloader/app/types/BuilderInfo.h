#pragma once
#include <Modloader/app/structs/BuilderInfo.h>
#include <Modloader/app/structs/BuilderInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderInfo {
        inline app::BuilderInfo__Class** type_info() {
            static app::BuilderInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderInfo__Class**)(modloader::win::memory::resolve_rva(0x04741450));
            }
            return cache;
        }
        inline app::BuilderInfo__Class* get_class() {
            return il2cpp::get_class<app::BuilderInfo__Class>(type_info(), "", "BuilderInfo");
        }
        inline app::BuilderInfo* create() {
            return il2cpp::create_object<app::BuilderInfo>(get_class());
        }
    } // namespace BuilderInfo
} // namespace app::classes::types
