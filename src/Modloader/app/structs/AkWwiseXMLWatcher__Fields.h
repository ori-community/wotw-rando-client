#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_DEFINED
struct String;
struct FileSystemWatcher;
struct Action;
struct Func_1_Boolean_;
struct Func_2_UInt32_Nullable_1_Single_;
struct __declspec(align(8)) AkWwiseXMLWatcher__Fields {
    struct String* SoundBankFolder;
    struct FileSystemWatcher* XmlWatcher;
    bool fireEvent;
    struct Action* XMLUpdated;
    struct Func_1_Boolean_* PopulateXML;
    struct Func_2_UInt32_Nullable_1_Single_* GetEventMaxDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/FileSystemWatcher.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Func_2_UInt32_Nullable_1_Single_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkWwiseXMLWatcher__Fields_FWDDECL)
#include <Modloader/app/structs/AkWwiseXMLWatcher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWwiseXMLWatcher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
