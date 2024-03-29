#pragma once
#include <Modloader/app/structs/Claim.h>
#include <Modloader/app/structs/Claim__Array.h>
#include <Modloader/app/structs/Claim__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Claim {
        inline app::Claim__Class** type_info() {
            static app::Claim__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Claim__Class**)(modloader::win::memory::resolve_rva(0x0476D598));
            }
            return cache;
        }
        inline app::Claim__Class* get_class() {
            return il2cpp::get_class<app::Claim__Class>(type_info(), "System.Security.Claims", "Claim");
        }
        inline app::Claim* create() {
            return il2cpp::create_object<app::Claim>(get_class());
        }
        inline app::Claim__Array* create_array(int size) {
            return il2cpp::array_new<app::Claim__Array>(get_class(), size);
        }
        inline app::Claim__Array* create_array(const std::vector<app::Claim*>& items) {
            return il2cpp::array_new<app::Claim__Array>(get_class(), items);
        }
    } // namespace Claim
} // namespace app::classes::types
