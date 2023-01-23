#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreSection__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreSection__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSection__VTable_DEFINED)
#define IL2CPP_STRUCT_IgnoreSection__VTable_DEFINED
struct IgnoreSection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Properties;
    VirtualInvokeData DeserializeElement;
    VirtualInvokeData InitializeDefault;
    VirtualInvokeData IsModified;
    VirtualInvokeData PostDeserialize;
    VirtualInvokeData Reset;
    VirtualInvokeData ResetModified;
    VirtualInvokeData SerializeToXmlElement;
    VirtualInvokeData Unmerge;
    VirtualInvokeData DeserializeSection;
    VirtualInvokeData SerializeSection;
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreSection__VTable_FWDDECL)
#define IL2CPP_STRUCT_IgnoreSection__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IgnoreSection__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSection__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreSection__VTable_FWDDECL)
#include <Modloader/app/structs/IgnoreSection__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreSection__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
