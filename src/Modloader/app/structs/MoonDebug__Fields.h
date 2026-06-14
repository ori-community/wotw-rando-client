#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDebug__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDebug__Fields_DEFINED
struct List_1_Moon_MoonDebugMessage_;
struct String;
struct StreamWriter;
struct NintendoSaveFileSystemBinaryWriter;
struct __declspec(align(8)) MoonDebug__Fields {
    struct List_1_Moon_MoonDebugMessage_* m_debugMessages;
    int32_t m_flushThreshhold;
    struct String* m_outputFilePath;
    struct StreamWriter* m_streamWriter;
    struct NintendoSaveFileSystemBinaryWriter* m_switchWriter;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonDebug__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonDebug__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonDebugMessage_.h>
#include <Modloader/app/structs/NintendoSaveFileSystemBinaryWriter.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDebug__Fields_FWDDECL)
#include <Modloader/app/structs/MoonDebug__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDebug__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
