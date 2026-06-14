#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymbolDocumentInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymbolDocumentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolDocumentInfo_DEFINED)
#include <Modloader/app/structs/SymbolDocumentInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SymbolDocumentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SymbolDocumentInfo_DEFINED
struct SymbolDocumentInfo__Class;
struct SymbolDocumentInfo {
    struct SymbolDocumentInfo__Class* klass;
    MonitorData* monitor;
    struct SymbolDocumentInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymbolDocumentInfo_FWDDECL)
#define IL2CPP_STRUCT_SymbolDocumentInfo_FWDDECL
#include <Modloader/app/structs/SymbolDocumentInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SymbolDocumentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolDocumentInfo_DEFINED) && !defined(IL2CPP_STRUCT_SymbolDocumentInfo_FWDDECL)
#include <Modloader/app/structs/SymbolDocumentInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymbolDocumentInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
