#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestBuilder__Fields_DEFINED)
#include <Modloader/app/structs/EventManifestOptions__Enum.h>
#if defined(IL2CPP_STRUCT_EventManifestOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_ManifestBuilder__Fields_DEFINED
struct Dictionary_2_System_Int32_System_String_;
struct Dictionary_2_System_UInt64_System_String_;
struct Dictionary_2_System_String_System_Type_;
struct Dictionary_2_System_String_System_String_;
struct StringBuilder;
struct ResourceManager;
struct IList_1_System_String_;
struct Dictionary_2_System_String_List_1_System_Int32_;
struct String;
struct List_1_System_Int32_;
struct __declspec(align(8)) ManifestBuilder__Fields {
    struct Dictionary_2_System_Int32_System_String_* opcodeTab;
    struct Dictionary_2_System_Int32_System_String_* taskTab;
    struct Dictionary_2_System_UInt64_System_String_* keywordTab;
    struct Dictionary_2_System_String_System_Type_* mapsTab;
    struct Dictionary_2_System_String_System_String_* stringTab;
    struct StringBuilder* sb;
    struct StringBuilder* events;
    struct StringBuilder* templates;
    struct ResourceManager* resources;
    EventManifestOptions__Enum flags;

    struct IList_1_System_String_* errors;
    struct Dictionary_2_System_String_List_1_System_Int32_* perEventByteArrayArgIndices;
    struct String* eventName;
    int32_t numParams;
    struct List_1_System_Int32_* byteArrArgIndices;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_ManifestBuilder__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Type_.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_String_.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/ResourceManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_ManifestBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ManifestBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/ManifestBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
