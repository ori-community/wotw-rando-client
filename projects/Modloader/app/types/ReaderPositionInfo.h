#pragma once
#include <Modloader/app/structs/ReaderPositionInfo.h>
#include <Modloader/app/structs/ReaderPositionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReaderPositionInfo {
        inline app::ReaderPositionInfo__Class** type_info() {
            static app::ReaderPositionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReaderPositionInfo__Class**)(modloader::win::memory::resolve_rva(0x0471BFF8));
            }
            return cache;
        }
        inline app::ReaderPositionInfo__Class* get_class() {
            return il2cpp::get_class<app::ReaderPositionInfo__Class>(type_info(), "System.Xml", "ReaderPositionInfo");
        }
        inline app::ReaderPositionInfo* create() {
            return il2cpp::create_object<app::ReaderPositionInfo>(get_class());
        }
    } // namespace ReaderPositionInfo
} // namespace app::classes::types
