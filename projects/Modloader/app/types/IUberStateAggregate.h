#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUberStateAggregate__Class.h>

namespace app::classes::types {
    namespace IUberStateAggregate {
        inline app::IUberStateAggregate__Class** type_info = (app::IUberStateAggregate__Class**)(modloader::win::memory::resolve_rva(0x047823D0));
        inline app::IUberStateAggregate__Class* get_class() {
            return il2cpp::get_class<app::IUberStateAggregate__Class>(type_info, "Moon", "IUberStateAggregate");
        }
    } // namespace IUberStateAggregate
} // namespace app::classes::types
