#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_List_1_T_Enumerator_Cart__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_List_1_T_Enumerator_Cart__INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_T_Enumerator_Cart__DEFINED)
#define IL2CPP_STRUCT_List_1_T_Enumerator_Cart__DEFINED
struct List_1_Cart_;
struct Cart;
struct List_1_T_Enumerator_Cart_ {
    struct List_1_Cart_* list;
    int32_t index;
    int32_t version;
    struct Cart* current;
};
#endif
#if !defined(IL2CPP_STRUCT_List_1_T_Enumerator_Cart__FWDDECL)
#define IL2CPP_STRUCT_List_1_T_Enumerator_Cart__FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/List_1_Cart_.h>
#endif
#undef IL2CPP_STRUCT_List_1_T_Enumerator_Cart__INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_T_Enumerator_Cart__DEFINED) && !defined(IL2CPP_STRUCT_List_1_T_Enumerator_Cart__FWDDECL)
#include <Modloader/app/structs/List_1_T_Enumerator_Cart_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/List_1_T_Enumerator_Cart_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
