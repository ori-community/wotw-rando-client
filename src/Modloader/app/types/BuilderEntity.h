#pragma once
#include <Modloader/app/structs/BuilderEntity.h>
#include <Modloader/app/structs/BuilderEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderEntity {
        inline app::BuilderEntity__Class** type_info() {
            static app::BuilderEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderEntity__Class**)(modloader::win::memory::resolve_rva(0x04761AB0));
            }
            return cache;
        }
        inline app::BuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::BuilderEntity__Class>(type_info(), "", "BuilderEntity");
        }
        inline app::BuilderEntity* create() {
            return il2cpp::create_object<app::BuilderEntity>(get_class());
        }
    } // namespace BuilderEntity
} // namespace app::classes::types
