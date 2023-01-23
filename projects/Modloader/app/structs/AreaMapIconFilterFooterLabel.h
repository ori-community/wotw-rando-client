#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_DEFINED)
#include <Modloader/app/structs/AreaMapIconFilter__Enum.h>
#if defined(IL2CPP_STRUCT_AreaMapIconFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_DEFINED
struct MessageProvider;
struct AreaMapIconFilterFooterLabel {
    AreaMapIconFilter__Enum Filter;

    struct MessageProvider* Footer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIconFilterFooterLabel_FWDDECL)
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
