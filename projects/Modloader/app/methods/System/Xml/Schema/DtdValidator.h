#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DtdValidator.h>
#include <Modloader/app/structs/IDtdParserAdapter.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaEntity.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>

namespace app::classes::System::Xml::Schema::DtdValidator {
    IL2CPP_REGISTER_METHOD(
        0x023657A0,
        void,
        ctor,
        app::DtdValidator* this_ptr,
        app::XmlValidatingReaderImpl* reader,
        app::IValidationEventHandling* event_handling,
        bool process_identity_constraints
    )
    IL2CPP_REGISTER_METHOD(0x023658A0, void, Init, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02365CB0, void, Validate, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023661C0, bool, MeetsStandAloneConstraint, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023662C0, void, ValidatePIComment, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023663C0, void, ValidateElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02366580, void, ValidateChildElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02366780, void, ValidateStartElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02366DD0, void, ValidateEndStartElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02367000, void, ProcessElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02367190, void, CompleteValidation, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023671F0, void, ValidateEndElement, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02367450, void, ProcessTokenizedType, app::DtdValidator* this_ptr, app::XmlTokenizedType__Enum ttype, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02367780, void, CheckValue, app::DtdValidator* this_ptr, app::String* value, app::SchemaAttDef* attdef)
    IL2CPP_REGISTER_METHOD(0x02367CE0, void, AddID, app::DtdValidator* this_ptr, app::String* name, app::Object* node)
    IL2CPP_REGISTER_METHOD(0x02367E80, app::Object*, FindId, app::DtdValidator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02367EA0, bool, GenEntity, app::DtdValidator* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x02368090, app::SchemaEntity*, GetEntity, app::DtdValidator* this_ptr, app::XmlQualifiedName* qname, bool f_parameter_entity)
    IL2CPP_REGISTER_METHOD(0x02368240, void, CheckForwardRefs, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02368450, void, Push, app::DtdValidator* this_ptr, app::XmlQualifiedName* element_name)
    IL2CPP_REGISTER_METHOD(0x02368680, bool, Pop, app::DtdValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023687E0, void, SetDefaultTypedValue, app::SchemaAttDef* attdef, app::IDtdParserAdapter* reader_adapter)
    IL2CPP_REGISTER_METHOD(
        0x02368AB0,
        void,
        CheckDefaultValue,
        app::SchemaAttDef* attdef,
        app::SchemaInfo* sinfo,
        app::IValidationEventHandling* event_handling,
        app::String* base_uri_str
    )
    IL2CPP_REGISTER_METHOD(0x02368F40, void, cctor, )
} // namespace app::classes::System::Xml::Schema::DtdValidator
