#pragma once
#include <Modloader/app/structs/IPrewarmable.h>
#include <Modloader/app/structs/IPrewarmable__Array.h>
#include <Modloader/app/structs/IPrewarmable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPrewarmable {
        inline app::IPrewarmable__Class** type_info() {
            static app::IPrewarmable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPrewarmable__Class**)(modloader::win::memory::resolve_rva(0x0475C378));
            }
            return cache;
        }
        inline app::IPrewarmable__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmable__Class>(type_info(), "", "IPrewarmable");
        }
        inline app::IPrewarmable__Array* create_array(int size) {
            return il2cpp::array_new<app::IPrewarmable__Array>(get_class(), size);
        }
        inline app::IPrewarmable__Array* create_array(const std::vector<app::IPrewarmable*>& items) {
            return il2cpp::array_new<app::IPrewarmable__Array>(get_class(), items);
        }
    } // namespace IPrewarmable
} // namespace app::classes::types
