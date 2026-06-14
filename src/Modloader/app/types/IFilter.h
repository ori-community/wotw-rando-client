#pragma once
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/IFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFilter {
        inline app::IFilter__Class** type_info() {
            static app::IFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFilter__Class**)(modloader::win::memory::resolve_rva(0x04702F18));
            }
            return cache;
        }
        inline app::IFilter__Class* get_class() {
            return il2cpp::get_class<app::IFilter__Class>(type_info(), "System.Data", "IFilter");
        }
    } // namespace IFilter
} // namespace app::classes::types
