#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_1, (app::DatatypeImplementation_SchemaDatatypeMap * this_ptr, app::String* name, app::DatatypeImplementation* type))
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor_2, (app::DatatypeImplementation_SchemaDatatypeMap * this_ptr, app::String* name, app::DatatypeImplementation* type, int32_t parent_index))
    IL2CPP_REGISTER_METHOD(0x00C3DB20, app::DatatypeImplementation*, op_Explicit, (app::DatatypeImplementation_SchemaDatatypeMap * sdm))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::DatatypeImplementation_SchemaDatatypeMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_ParentIndex, (app::DatatypeImplementation_SchemaDatatypeMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02355650, int32_t, CompareTo, (app::DatatypeImplementation_SchemaDatatypeMap * this_ptr, app::Object* obj))
} // namespace app::classes::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap
