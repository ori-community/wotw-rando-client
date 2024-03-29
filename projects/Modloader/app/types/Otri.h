#pragma once
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/Otri__Array.h>
#include <Modloader/app/structs/Otri__Boxed.h>
#include <Modloader/app/structs/Otri__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Otri {
        inline app::Otri__Class** type_info() {
            static app::Otri__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Otri__Class**)(modloader::win::memory::resolve_rva(0x0474B600));
            }
            return cache;
        }
        inline app::Otri__Class* get_class() {
            return il2cpp::get_class<app::Otri__Class>(type_info(), "TriangleNet.Topology", "Otri");
        }
        inline app::Otri* create() {
            return il2cpp::create_object<app::Otri>(get_class());
        }
        inline app::Otri__Boxed* box(app::Otri value) {
            return il2cpp::box_value<app::Otri__Boxed>(get_class(), value);
        }
        inline app::Otri__Array* create_array(int size) {
            return il2cpp::array_new<app::Otri__Array>(get_class(), size);
        }
        inline app::Otri__Array* create_array(const std::vector<app::Otri>& items) {
            return il2cpp::array_new<app::Otri__Array>(get_class(), items);
        }
    } // namespace Otri
} // namespace app::classes::types
