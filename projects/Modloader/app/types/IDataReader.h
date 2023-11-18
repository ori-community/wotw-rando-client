#pragma once
#include <Modloader/app/structs/IDataReader.h>
#include <Modloader/app/structs/IDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDataReader {
        inline app::IDataReader__Class** type_info() {
            static app::IDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDataReader__Class**)(modloader::win::memory::resolve_rva(0x047923E0));
            }
            return cache;
        }
        inline app::IDataReader__Class* get_class() {
            return il2cpp::get_class<app::IDataReader__Class>(type_info(), "Moon.Network.Web", "IDataReader");
        }
    } // namespace IDataReader
} // namespace app::classes::types
