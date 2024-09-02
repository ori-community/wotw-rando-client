#pragma once

#include <vector>

namespace core::api::save_files {
  /**
   * Get the on-disk save data for a save file.
   * @param slot_index Save slot index
   * @param backup_index Backup slot index. Set this to -1 to request the current game save file.
   * @return Pointer to an il2cpp array of System.Byte.
   */
  CORE_DLLEXPORT app::Byte__Array* get_byte_array(int slot_index, int backup_index = -1);

  /**
   * Get the on-disk save data for a save file.
   * @param slot_index Save slot index
   * @param backup_index Backup slot index.  Set this to -1 to request the current game save file.
   * @return Byte vector containing the on-disk save data
   */
  CORE_DLLEXPORT std::vector<std::byte> get_bytes(int slot_index, int backup_index = -1);
}
