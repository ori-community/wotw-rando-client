#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3Int_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3Int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Int_DEFINED)
#define IL2CPP_STRUCT_Vector3Int_DEFINED
struct Vector3Int {
    int32_t m_X;
    int32_t m_Y;
    int32_t m_Z;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector3Int_FWDDECL)
#define IL2CPP_STRUCT_Vector3Int_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector3Int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3Int_DEFINED) && !defined(IL2CPP_STRUCT_Vector3Int_FWDDECL)
#include <Modloader/app/structs/Vector3Int.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3Int.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
