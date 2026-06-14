#pragma once
#include <Modloader/app/structs/SqlXmlStreamWrapper.h>
#include <Modloader/app/structs/SqlXmlStreamWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlXmlStreamWrapper {
        inline app::SqlXmlStreamWrapper__Class** type_info() {
            static app::SqlXmlStreamWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlXmlStreamWrapper__Class**)(modloader::win::memory::resolve_rva(0x0471F398));
            }
            return cache;
        }
        inline app::SqlXmlStreamWrapper__Class* get_class() {
            return il2cpp::get_class<app::SqlXmlStreamWrapper__Class>(type_info(), "System.Data.SqlTypes", "SqlXmlStreamWrapper");
        }
        inline app::SqlXmlStreamWrapper* create() {
            return il2cpp::create_object<app::SqlXmlStreamWrapper>(get_class());
        }
    } // namespace SqlXmlStreamWrapper
} // namespace app::classes::types
