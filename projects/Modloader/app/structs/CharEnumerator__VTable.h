#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharEnumerator__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharEnumerator__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEnumerator__VTable_DEFINED)
#define IL2CPP_STRUCT_CharEnumerator__VTable_DEFINED
struct CharEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData Reset;
    VirtualInvokeData Clone;
    VirtualInvokeData get_Current;
    VirtualInvokeData Dispose;
};
#endif
#if !defined(IL2CPP_STRUCT_CharEnumerator__VTable_FWDDECL)
#define IL2CPP_STRUCT_CharEnumerator__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharEnumerator__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEnumerator__VTable_DEFINED) && !defined(IL2CPP_STRUCT_CharEnumerator__VTable_FWDDECL)
#include <Modloader/app/structs/CharEnumerator__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharEnumerator__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
