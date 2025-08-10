#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>

namespace app::classes::System::Xml::Schema::XmlSchema {
    IL2CPP_REGISTER_METHOD(0x02256A30, void, ctor, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022571E0, app::XmlSchema*, Read, app::XmlReader* reader, app::ValidationEventHandler* validation_event_handler)
    IL2CPP_REGISTER_METHOD(
        0x022575D0,
        bool,
        CompileSchema,
        app::XmlSchema* this_ptr,
        app::XmlSchemaCollection* xsc,
        app::XmlResolver* resolver,
        app::SchemaInfo* schema_info,
        app::String* ns,
        app::ValidationEventHandler* validation_event_handler,
        app::XmlNameTable* name_table,
        bool compile_content_model
    )
    IL2CPP_REGISTER_METHOD(
        0x02257980,
        void,
        CompileSchemaInSet,
        app::XmlSchema* this_ptr,
        app::XmlNameTable* name_table,
        app::ValidationEventHandler* event_handler,
        app::XmlSchemaCompilationSettings* compilation_settings
    )
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::XmlSchemaForm__Enum, get_AttributeFormDefault, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_AttributeFormDefault, app::XmlSchema* this_ptr, app::XmlSchemaForm__Enum value)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::XmlSchemaDerivationMethod__Enum, get_BlockDefault, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_BlockDefault, app::XmlSchema* this_ptr, app::XmlSchemaDerivationMethod__Enum value)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::XmlSchemaDerivationMethod__Enum, get_FinalDefault, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_FinalDefault, app::XmlSchema* this_ptr, app::XmlSchemaDerivationMethod__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::XmlSchemaForm__Enum, get_ElementFormDefault, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_ElementFormDefault, app::XmlSchema* this_ptr, app::XmlSchemaForm__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_TargetNamespace, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_TargetNamespace, app::XmlSchema* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Version, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Version, app::XmlSchema* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaObjectCollection*, get_Includes, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaObjectCollection*, get_Items, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_IsCompiledBySet, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_IsCompiledBySet, app::XmlSchema* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_IsPreprocessed, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8A130, void, set_IsPreprocessed, app::XmlSchema* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01CA7690, bool, get_IsRedefined, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02257B20, void, set_IsRedefined, app::XmlSchema* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02257B30, app::XmlSchemaObjectTable*, get_Attributes, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02257C90, app::XmlSchemaObjectTable*, get_AttributeGroups, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02257DF0, app::XmlSchemaObjectTable*, get_SchemaTypes, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02257F50, app::XmlSchemaObjectTable*, get_Elements, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_Id, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Id, app::XmlSchema* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::XmlSchemaObjectTable*, get_Groups, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::XmlSchemaObjectTable*, get_Notations, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::XmlSchemaObjectTable*, get_IdentityConstraints, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Uri*, get_BaseUri, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_BaseUri, app::XmlSchema* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x022580B0, int32_t, get_SchemaId, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsChameleon, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsChameleon, app::XmlSchema* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::Hashtable*, get_Ids, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02258170, app::XmlDocument*, get_Document, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_ErrorCount, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C9CC0, void, set_ErrorCount, app::XmlSchema* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x022582D0, app::XmlSchema*, Clone, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02258480, app::XmlSchema*, DeepClone, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_IdAttribute, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_IdAttribute, app::XmlSchema* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x006DC040, void, SetIsCompiled, app::XmlSchema* this_ptr, bool is_compiled)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetUnhandledAttributes, app::XmlSchema* this_ptr, app::XmlAttribute__Array* more_attributes)
    IL2CPP_REGISTER_METHOD(0x02258900, void, AddAnnotation, app::XmlSchema* this_ptr, app::XmlSchemaAnnotation* annotation)
    IL2CPP_REGISTER_METHOD(0x02258920, app::ArrayList*, get_ImportedSchemas, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02258A80, app::ArrayList*, get_ImportedNamespaces, app::XmlSchema* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02258BE0, void, GetExternalSchemasList, app::XmlSchema* this_ptr, app::IList* ext_list, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x02258DC0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlSchema
