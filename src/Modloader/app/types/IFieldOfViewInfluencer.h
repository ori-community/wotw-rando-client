#pragma once
#include <Modloader/app/structs/IFieldOfViewInfluencer.h>
#include <Modloader/app/structs/IFieldOfViewInfluencer__Array.h>
#include <Modloader/app/structs/IFieldOfViewInfluencer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFieldOfViewInfluencer {
        inline app::IFieldOfViewInfluencer__Class** type_info() {
            static app::IFieldOfViewInfluencer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFieldOfViewInfluencer__Class**)(modloader::win::memory::resolve_rva(0x047581D8));
            }
            return cache;
        }
        inline app::IFieldOfViewInfluencer__Class* get_class() {
            return il2cpp::get_class<app::IFieldOfViewInfluencer__Class>(type_info(), "", "IFieldOfViewInfluencer");
        }
        inline app::IFieldOfViewInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::IFieldOfViewInfluencer__Array>(get_class(), size);
        }
        inline app::IFieldOfViewInfluencer__Array* create_array(const std::vector<app::IFieldOfViewInfluencer*>& items) {
            return il2cpp::array_new<app::IFieldOfViewInfluencer__Array>(get_class(), items);
        }
    } // namespace IFieldOfViewInfluencer
} // namespace app::classes::types
