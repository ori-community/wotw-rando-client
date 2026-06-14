#pragma once
#include <Modloader/app/structs/FrogEntity.h>
#include <Modloader/app/structs/FrogEntity__Array.h>
#include <Modloader/app/structs/FrogEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogEntity {
        inline app::FrogEntity__Class** type_info() {
            static app::FrogEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrogEntity__Class**)(modloader::win::memory::resolve_rva(0x04759AC8));
            }
            return cache;
        }
        inline app::FrogEntity__Class* get_class() {
            return il2cpp::get_class<app::FrogEntity__Class>(type_info(), "", "FrogEntity");
        }
        inline app::FrogEntity* create() {
            return il2cpp::create_object<app::FrogEntity>(get_class());
        }
        inline app::FrogEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), size);
        }
        inline app::FrogEntity__Array* create_array(const std::vector<app::FrogEntity*>& items) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), items);
        }
    } // namespace FrogEntity
} // namespace app::classes::types
