#pragma once
#include <Modloader/app/structs/ITurbulenceInfluencer.h>
#include <Modloader/app/structs/ITurbulenceInfluencer__Array.h>
#include <Modloader/app/structs/ITurbulenceInfluencer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITurbulenceInfluencer {
        inline app::ITurbulenceInfluencer__Class** type_info() {
            static app::ITurbulenceInfluencer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITurbulenceInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0472A0A8));
            }
            return cache;
        }
        inline app::ITurbulenceInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ITurbulenceInfluencer__Class>(type_info(), "", "ITurbulenceInfluencer");
        }
        inline app::ITurbulenceInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ITurbulenceInfluencer__Array>(get_class(), size);
        }
        inline app::ITurbulenceInfluencer__Array* create_array(const std::vector<app::ITurbulenceInfluencer*>& items) {
            return il2cpp::array_new<app::ITurbulenceInfluencer__Array>(get_class(), items);
        }
    } // namespace ITurbulenceInfluencer
} // namespace app::classes::types
